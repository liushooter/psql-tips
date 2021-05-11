    <div class="tip">
	  <code>\ds</code> will display the list of user created and visible
	  sequences. <code>\ds pattern</code> will list
	  sequences matching the pattern.
	  The <code>&#43;</code> modifier will also display persistence,
	  size and description.
	  The <code>S</code> modifier will also display the system sequences.
      <pre><code class="hljs bash">laetitia=# \ds
                  List of relations
 Schema |         Name          |   Type   |  Owner   
--------&#43;-----------------------&#43;----------&#43;----------
 public | mytest_id_seq         | sequence | test
 public | partition_test_id_seq | sequence | laetitia
 public | test_id_seq           | sequence | laetitia
(3 rows)

(3 rows)

laetitia=# \ds&#43;
 Schema |         Name          |   Type   |  Owner   | Persistence |    Size    | Description 
--------&#43;-----------------------&#43;----------&#43;----------&#43;-------------&#43;------------&#43;-------------
 public | mytest_id_seq         | sequence | test     | permanent   | 8192 bytes | 
 public | partition_test_id_seq | sequence | laetitia | permanent   | 8192 bytes | 
 public | test_id_seq           | sequence | laetitia | permanent   | 8192 bytes | 
                                       List of relations
laetitia=# \dsS
                  List of relations
 Schema |         Name          |   Type   |  Owner   
--------&#43;-----------------------&#43;----------&#43;----------
 public | mytest_id_seq         | sequence | test
 public | partition_test_id_seq | sequence | laetitia
 public | test_id_seq           | sequence | laetitia
(3 rows)</code></pre>This feature is available
since at least Postgres 7.1, but has been upgraded in Postgres 7.2 to add the <code>S</code>
modifier and in Postgres 8.4 to add the <code>&#43;</code> modifier.
	</div>
