    <div class="tip" name="24">
      If you use the <code>-l</code> or <code>--list</code> flag,
      all the other options provided (except the database name
      option) won't be taken into account.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -l -c 'select * from test;' laetitia
                                  List of databases
   Name    |  Owner   | Encoding |   Collate   |    Ctype    |   Access privileges   
-----------&#43;----------&#43;----------&#43;-------------&#43;-------------&#43;-----------------------
 laetitia  | laetitia | UTF8     | en_US.UTF-8 | en_US.UTF-8 | 
 postgres  | postgres | UTF8     | en_US.UTF-8 | en_US.UTF-8 | 
 template0 | postgres | UTF8     | en_US.UTF-8 | en_US.UTF-8 | =c/postgres          &#43;
           |          |          |             |             | postgres=CTc/postgres
 template1 | postgres | UTF8     | en_US.UTF-8 | en_US.UTF-8 | =c/postgres          &#43;
           |          |          |             |             | postgres=CTc/postgres
 test      | postgres | UTF8     | en_US.UTF-8 | en_US.UTF-8 | 
(5 rows)</code></pre>This feature is available since Postgres 10.
    </div>
