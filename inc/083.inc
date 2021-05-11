    <div class="tip">
	  <code>\dv</code> will display the list of user created and visible
	  views. <code>\dv pattern</code> will list
	  views matching the pattern.
	  The <code>&#43;</code> modifier will also display persistence,
	  size and description.
	  The <code>S</code> modifier will also display the system views.
      <pre><code class="hljs bash">laetitia=# \dv
         List of relations
 Schema |  Name  | Type |  Owner
--------&#43;--------&#43;------&#43;----------
 public | myview | view | laetitia
(1 row)

laetitia=# \dv&#43;
                            List of relations
 Schema |  Name  | Type |  Owner   | Persistence |  Size   | Description
--------&#43;--------&#43;------&#43;----------&#43;-------------&#43;---------&#43;-------------
 public | myview | view | laetitia | permanent   | 0 bytes |
(1 row)

laetitia=# \dvS
                       List of relations
   Schema   |              Name               | Type |  Owner
------------&#43;---------------------------------&#43;------&#43;----------
 pg_catalog | pg_available_extension_versions | view | postgres
 pg_catalog | pg_available_extensions         | view | postgres
[...]
 pg_catalog | pg_views                        | view | postgres
 public     | myview                          | view | laetitia
(72 rows)</code></pre>This feature is available
since at least Postgres 7.1, but has been upgraded in Postgres 7.2 to add the <code>S</code>
modifier and in Postgres 8.4 to add the <code>&#43;</code> modifier.
	</div>
