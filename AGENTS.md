<!-- codebase-memory-mcp:start -->
# Codebase Knowledge Graph (codebase-memory-mcp)

This project uses codebase-memory-mcp to maintain a knowledge graph of the codebase.
ALWAYS prefer MCP graph tools over grep/glob/file-search for code discovery.

## Priority Order
1. `search_graph` — find functions, classes, routes, variables by pattern
2. `trace_path` — trace who calls a function or what it calls
3. `get_code_snippet` — read specific function/class source code
4. `query_graph` — run Cypher queries for complex patterns
5. `get_architecture` — high-level project summary

## When to fall back to grep/glob
- Searching for string literals, error messages, config values
- Searching non-code files (Dockerfiles, shell scripts, configs)
- When MCP tools return insufficient results

## Examples
- Find a handler: `search_graph(name_pattern=".*OrderHandler.*")`
- Who calls it: `trace_path(function_name="OrderHandler", direction="inbound")`
- Read source: `get_code_snippet(qualified_name="pkg/orders.OrderHandler")`
<!-- codebase-memory-mcp:end -->

@/home/xor/.codex/RTK.md

## libdosbox custom memory contract

- In `libdosbox`, `m2c::m` is not shadow memory.
- `m2c::m` is the translated-program memory view and is expected to reflect live DOSBox guest memory.
- Historical behavior on branch `libdosbox-0.5x` relied on dumps and translated code reading bytes from `((db *)&m2c::m) + offset`.
- Do not replace `m2c::m` with an independent zero-filled compatibility buffer for non-dispatch/instrument builds.
- If a build mode cannot provide a live `m2c::m` view backed by DOS memory, treat that as a regression and read guest memory through DOSBox memory APIs only as a temporary workaround.
