    <div class="tip">
	  <code>\db</code> will display a list of tablespaces. <code>\db pattern</code> will list
	  tablespaces matching the pattern.
	  The <code>&#43;</code> modifier will display access privileges, options, size and description.
      <pre><code class="hljs bash">laetitia=# \db
       List of tablespaces
    Name    |  Owner   | Location 
------------&#43;----------&#43;----------
 pg_default | postgres | 
 pg_global  | postgres | 
(2 rows)

laetitia=# \db&#43;
                                  List of tablespaces
    Name    |  Owner   | Location | Access privileges | Options |  Size  | Description 
------------&#43;----------&#43;----------&#43;-------------------&#43;---------&#43;--------&#43;-------------
 pg_default | postgres |          |                   |         | 39 MB  | 
 pg_global  | postgres |          |                   |         | 559 kB | 
(2 rows)</code></pre>This feature is available
since Postgres 8.0.
	</div>
