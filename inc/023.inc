    <div class="tip" name="23">
      Unless a databasename is given, using the <code>-l</code> or
      <code>--list</code> flag will make psql attempt to connect to
      the <code>postgres</code> database.
      <pre><code class=
      "hljs bash">laetitia:~$ sudo cat /usr/local/pgsql/data/pg_hba.conf
# TYPE  DATABASE        USER            ADDRESS                 METHOD

local   postgres       laetitia                                 reject
# "local" is for Unix domain socket connections only
local   all             all                                     trust
# IPv4 local connections:
host    all             all             127.0.0.1/32            trust
# IPv6 local connections:
host    all             all             ::1/128                 trust
# Allow replication connections from localhost, by a user with the
# replication privilege.
local   replication     all                                     trust
host    replication     all             127.0.0.1/32            trust
host    replication     all             ::1/128                 trust
laetitia:~$ psql -l
psql: error: connection to server on socket "/tmp/.s.PGSQL.5432" failed: FATAL:  pg_hba.conf rejects connection for host "[local]", user "laetitia", database "postgres", no encryption
laetitia:~$ psql -l laetitia
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
