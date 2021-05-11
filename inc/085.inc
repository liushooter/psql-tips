    <div class="tip">
	  <code>\det</code> will display a list of user created and visible foreign
	  tables. <code>\det pattern</code> will list
	  foreign ables matching the pattern.
	  The <code>&#43;</code> modifier will also display FDW option and description.
      <pre><code class="hljs bash">laetitia=# \det
 List of foreign tables
 Schema | Table | Server 
--------&#43;-------&#43;--------
 public | logs  | pglog
(1 row)

laetitia=# \det&#43;
                                List of foreign tables
 Schema | Table | Server |                  FDW options                  | Description 
--------&#43;-------&#43;--------&#43;-----------------------------------------------&#43;-------------
 public | logs  | pglog  | (filename 'postgresql-Sun.csv', format 'csv') | 
(1 row)</code></pre>This feature is available
since Postgres 8.4.
	</div>
