    <div class="tip">
	  You can use the <code>a</code> modifier to list only aggregate functions with the
	  <code>\df</code> meta command.
      <pre><code class="hljs bash">laetitia=# \dfa variance 
                           List of functions
   Schema   |   Name   | Result data type | Argument data types | Type 
------------&#43;----------&#43;------------------&#43;---------------------&#43;------
 pg_catalog | variance | numeric          | bigint              | agg
 pg_catalog | variance | double precision | double precision    | agg
 pg_catalog | variance | numeric          | integer             | agg
 pg_catalog | variance | numeric          | numeric             | agg
 pg_catalog | variance | double precision | real                | agg
 pg_catalog | variance | numeric          | smallint            | agg
(6 rows)</code></pre>This feature is available
since Postgres 8.4.
	</div>
