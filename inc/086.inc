    <div class="tip">
	  <code>\df</code> will display a list of user created and visible
	  functions. <code>\df pattern</code> will list
	  functions matching the pattern.
	  The <code>&#43;</code> modifier will also display volatility, parallel safety,
	  owner, security, access privileges, language, source code and description.
	  The <code>S</code> modifier will also display the system functions.
      <pre><code class="hljs bash">laetitia=# \df
                              List of functions
 Schema |        Name        | Result data type | Argument data types | Type 
--------&#43;--------------------&#43;------------------&#43;---------------------&#43;------
 public | file_fdw_handler   | fdw_handler      |                     | func
 public | file_fdw_validator | void             | text[], oid         | func
(2 rows)

laetitia=# \df&#43;
                                                                                      List of functions
 Schema |        Name        | Result data type | Argument data types | Type | Volatility | Parallel |  Owner   | Security | Access privileges | Language |    Source code     | Description 
--------&#43;--------------------&#43;------------------&#43;---------------------&#43;------&#43;------------&#43;----------&#43;----------&#43;----------&#43;-------------------&#43;----------&#43;--------------------&#43;-------------
 public | file_fdw_handler   | fdw_handler      |                     | func | volatile   | unsafe   | laetitia | invoker  |                   | c        | file_fdw_handler   | 
 public | file_fdw_validator | void             | text[], oid         | func | volatile   | unsafe   | laetitia | invoker  |                   | c        | file_fdw_validator | 
(2 rows)

laetitia=# \dfS xpath*
                             List of functions
   Schema   |     Name     | Result data type | Argument data types | Type 
------------&#43;--------------&#43;------------------&#43;---------------------&#43;------
 pg_catalog | xpath        | xml[]            | text, xml           | func
 pg_catalog | xpath        | xml[]            | text, xml, text[]   | func
 pg_catalog | xpath_exists | boolean          | text, xml           | func
 pg_catalog | xpath_exists | boolean          | text, xml, text[]   | func
(4 rows)</code></pre>This feature is available
since at least Postgres 7.1, but has been upgraded in Postgres 8.0 to add the
<code>&#43;</code> modifier and in Postgres 8.4 to add the <code>S</code> modifier.
	</div>
