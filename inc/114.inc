    <div class="tip"> The <code>\dx</code> metacommand will display a list of installed
	extensions. <code>\dx pattern</code> will display only extensions matching the given
	pattern. The <code>+</code> modifier will allow to display a list of all the objects
	belonging to each extension.
	<pre><code class="hljs bash">laetitia=# \dx
                 List of installed extensions
  Name   | Version |   Schema   |         Description          
---------+---------+------------+------------------------------
 plpgsql | 1.0     | pg_catalog | PL/pgSQL procedural language
(1 row)

laetitia=# \dx+
      Objects in extension "plpgsql"
            Object description             
-------------------------------------------
 function plpgsql_call_handler()
 function plpgsql_inline_handler(internal)
 function plpgsql_validator(oid)
 language plpgsql
(4 rows)</code></pre>This feature is available since Postgres 9.1.
	</div>
