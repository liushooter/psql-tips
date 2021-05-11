    <div class="tip">
	  <code>\ddp</code> will display a list of default access privilege
	  settings. An entry is shown for each role (and schema, if applicable) for
	  which the default privilege settings have been changed from the built-in
	  defaults. If pattern is specified, only entries whose role name or schema
	  name matches the pattern are listed.
      <pre><code class="hljs bash">laetitia=# alter default privileges for role test revoke all on tables from test;
ALTER DEFAULT PRIVILEGES
laetitia=# \ddp
         Default access privileges
 Owner | Schema | Type  | Access privileges 
-------&#43;--------&#43;-------&#43;-------------------
 test  |        | table | 
(1 row) </code></pre>This feature is available
since Postgres 7.3., but has been upgraded in Postgres 8.4 to add the <code>S</code>
modifier and inPostgres 9.2 to add the <code>&#43;</code> modifier.
	</div>
