    <div class="tip">
	  You can use the <code>n</code> modifier to list only "normal" functions with the
	  <code>\df</code> meta command.
      <pre><code class="hljs bash">laetitia=# \dfn
                              List of functions
 Schema |        Name        | Result data type | Argument data types | Type 
--------&#43;--------------------&#43;------------------&#43;---------------------&#43;------
 public | file_fdw_handler   | fdw_handler      |                     | func
 public | file_fdw_validator | void             | text[], oid         | func
(2 rows)</code></pre>This feature is available
since Postgres 8.4.
	</div>
