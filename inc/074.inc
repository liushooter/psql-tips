    <div class="tip">
	  <code>\dn</code> will display a list of schemas. The <code>S</code> modifier will allow to list
	  system schemas too. <code>\dn pattern</code> will list schemas matching the pattern.
	  The <code>&#43;</code> modifier will display access privileges and description.
      <pre><code class="hljs bash">laetitia=# \dn
  List of schemas
  Name  |  Owner   
--------&#43;----------
 public | postgres
(1 row)

laetitia=# \dnS
        List of schemas
        Name        |  Owner   
--------------------&#43;----------
 information_schema | postgres
 pg_catalog         | postgres
 pg_toast           | postgres
 public             | postgres
(4 rows)

laetitia=# \dn pub*
  List of schemas
  Name  |  Owner   
--------&#43;----------
 public | postgres
(1 row)i

laetitia=# \dn&#43; pub*
                          List of schemas
  Name  |  Owner   |  Access privileges   |      Description       
--------&#43;----------&#43;----------------------&#43;------------------------
 public | postgres | postgres=UC/postgres&#43;| standard public schema
        |          | =UC/postgres         | 
(1 row)</code></pre>This feature is available
since Postgres 7.4, but was updated in Postgres 8.0 to add the <code>&#43;</code> modifier and
in Postgres 9.0 to add the <code>S</code> modifier.
	</div>
