    <div class="tip">
	  <code>\dm</code> will display the list of user created and visible
	  materialized views. <code>\dm pattern</code> will list
	  materialized views matching the pattern.
	  The <code>&#43;</code> modifier will also display persistence, access methode,
	  size and description.
	  The <code>S</code> modifier will also display the system materialized
	  views. There is currently no materialized views provided by Postgres.
      <pre><code class="hljs bash">laetitia=# \dm
              List of relations
 Schema | Name |       Type        |  Owner   
--------&#43;------&#43;-------------------&#43;----------
 public | mymv | materialized view | laetitia
(1 row)

laetitia=# \dm&#43;
                                        List of relations
 Schema | Name |       Type        |  Owner   | Persistence | Access Method | Size  | Description 
--------&#43;------&#43;-------------------&#43;----------&#43;-------------&#43;---------------&#43;-------&#43;-------------
 public | mymv | materialized view | laetitia | permanent   | heap          | 16 kB | 
(1 row)

laetitia=# \dmS
              List of relations
 Schema | Name |       Type        |  Owner   
--------&#43;------&#43;-------------------&#43;----------
 public | mymv | materialized view | laetitia
(1 row) </code></pre>This feature is available
since Postgres 9.3.
	</div>
