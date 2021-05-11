	<div class="tip">
	  <code>\dL</code> will display a list of user created and visible
	  procedural languages. <code>\df pattern</code> will list
	  functions matching the pattern.
	  The <code>+</code> modifier will also display if it's an internal language,
	  the call handler, the validator, the inline handler,
	  access privileges and description.
	  The <code>S</code> modifier will also display the system procedural languages.
      <pre><code class="hljs bash">laetitia=<span class="hljs-comment"># \dl</span>
      Large objects
 ID | Owner | Description 
----+-------+-------------
(0 rows)

laetitia=<span class="hljs-comment"># \dL</span>
                      List of languages
  Name   |  Owner   | Trusted |         Description          
---------+----------+---------+------------------------------
 plpgsql | postgres | t       | PL/pgSQL procedural language
(1 row)

laetitia=<span class="hljs-comment"># \dL+</span>
                                                                                    List of languages
  Name   |  Owner   | Trusted | Internal language |      Call handler      |       Validator        |          Inline handler          | Access privileges |         Description          
---------+----------+---------+-------------------+------------------------+------------------------+----------------------------------+-------------------+------------------------------
 plpgsql | postgres | t       | f                 | plpgsql_call_handler() | plpgsql_validator(oid) | plpgsql_inline_handler(internal) |                   | PL/pgSQL procedural language
(1 row)

laetitia=<span class="hljs-comment"># \dLS</span>
                       List of languages
   Name   |  Owner   | Trusted |          Description           
----------+----------+---------+--------------------------------
 c        | postgres | f       | dynamically-loaded C <span class="hljs-built_in">functions</span>
 internal | postgres | f       | built-in <span class="hljs-built_in">functions</span>
 plpgsql  | postgres | t       | PL/pgSQL procedural language
 sql      | postgres | t       | SQL-language <span class="hljs-built_in">functions</span>
(4 rows)</code></pre>This feature is available
since at least Postgres 7.1, but has been upgraded in Postgres 8.0 to add the
<code>+</code> modifier and in Postgres 8.4 to add the <code>S</code> modifier.
	</div>
