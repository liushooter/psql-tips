    <div class="tip">
	  <code>\dD</code> will display a list of domains. <code>\dD pattern</code> will list
	  domain matching the pattern.
	  The <code>&#43;</code> modifier will also display access privileges and description.
	  The <code>S</code> modifier will also display the system domains. There is
	  currently no system domains provided with Postgres.
      <pre><code class="hljs bash">laetitia=# \dD
                                           List of domains
 Schema |     Name      | Type | Collation | Nullable | Default |                Check                
--------&#43;---------------&#43;------&#43;-----------&#43;----------&#43;---------&#43;-------------------------------------
 public | one_word_only | text |           |          |         | CHECK (VALUE ~ '^[a-zA-Z]&#43;$'::text)
(1 row)

laetitia=# \dD&#43;
                                                            List of domains
 Schema |     Name      | Type | Collation | Nullable | Default |                Check                | Access privileges | Description 
--------&#43;---------------&#43;------&#43;-----------&#43;----------&#43;---------&#43;-------------------------------------&#43;-------------------&#43;-------------
 public | one_word_only | text |           |          |         | CHECK (VALUE ~ '^[a-zA-Z]&#43;$'::text) |                   | 
(1 row)

laetitia=# \dDS
                                           List of domains
 Schema |     Name      | Type | Collation | Nullable | Default |                Check                
--------&#43;---------------&#43;------&#43;-----------&#43;----------&#43;---------&#43;-------------------------------------
 public | one_word_only | text |           |          |         | CHECK (VALUE ~ '^[a-zA-Z]&#43;$'::text)
(1 row)</code></pre>This feature is available
since Postgres 7.3., but has been upgraded in Postgres 8.4 to add the <code>S</code>
modifier and in Postgres 9.2 to add the <code>&#43;</code> modifier.
	</div>
