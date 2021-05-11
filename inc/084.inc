    <div class="tip">
	  <code>\des</code> will display a list of user create and visible foreign
	  servers. <code>\des pattern</code> will list
	  foreign servers matching the pattern.
	  The <code>&#43;</code> modifier will also display access privileges, type, version, FDW option and description.
      <pre><code class="hljs bash">laetitia=# \des
         List of foreign servers
 Name  |  Owner   | Foreign-data wrapper 
-------&#43;----------&#43;----------------------
 pglog | laetitia | file_fdw
(1 row)

laetitia=# \des&#43;
                                         List of foreign servers
 Name  |  Owner   | Foreign-data wrapper | Access privileges | Type | Version | FDW options | Description 
-------&#43;----------&#43;----------------------&#43;-------------------&#43;------&#43;---------&#43;-------------&#43;-------------
 pglog | laetitia | file_fdw             |                   |      |         |             | 
(1 row)</code></pre>This feature is available
since Postgres 8.4.
	</div>
