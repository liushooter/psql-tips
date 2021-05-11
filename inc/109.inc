    <div class="tip">
	  The <code>\rds</code> meta-command will display the specific role based or database
	  based settings.
      <pre><code class="hljs bash">laetitia=# \drds
             List of settings
   Role   | Database |      Settings      
----------+----------+--------------------
 laetitia |          | work_mem=250MB
          | laetitia | search_path=public+
          |          | work_mem=500MB
(2 rows)

laetitia=# \drds * laetitia
           List of settings
 Role | Database |      Settings      
------+----------+--------------------
      | laetitia | search_path=public+
      |          | work_mem=500MB
(1 row)

laetitia=# \drds laetitia
           List of settings
   Role   | Database |    Settings    
----------+----------+----------------
 laetitia |          | work_mem=250MB
(1 row)</code></pre>This feature is available
since Postgres 9.0.
	</div>
