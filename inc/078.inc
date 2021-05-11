    <div class="tip">
	  <code>\dE</code> will display a list of foreign table. <code>\dE pattern</code> will list
	  foreign tables matching the pattern.
	  The <code>&#43;</code> modifier will also display persistence, size and description.
	  The <code>S</code> modifier will also display the system foreign tables. There is
	  currently no system foreign table provided with Postgres.
      <pre><code class="hljs bash">laetitia=# \dE
            List of relations
 Schema | Name |     Type      |  Owner   
--------&#43;------&#43;---------------&#43;----------
 public | logs | foreign table | laetitia
(1 row)

laetitia=# \dE&#43;
                               List of relations
 Schema | Name |     Type      |  Owner   | Persistence |  Size   | Description 
--------&#43;------&#43;---------------&#43;----------&#43;-------------&#43;---------&#43;-------------
 public | logs | foreign table | laetitia | permanent   | 0 bytes | 
(1 row)

laetitia=# \dES
            List of relations
 Schema | Name |     Type      |  Owner   
--------&#43;------&#43;---------------&#43;----------
 public | logs | foreign table | laetitia
(1 row)</code></pre>This feature is available
since Postgres 9.1.
	</div>
