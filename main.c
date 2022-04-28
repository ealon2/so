#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include "./commons/config.h"
#include "./commons/log.h"
#define MODULENAME "CONSOLA"
#define CONFIG_FILE_PATH "consola.config"


int main(int argc, char** argv) {

	FILE* archivoEjecucion;
	char* codigoEjecucion;
	char* IP_KERNEL;
	char* PUERTO_KERNEL;
  int kernel_fd;
  t_log* consola_log;
  
  //consola_log = log_create("consola.log", "CONSOLA", true, LOG_LEVEL_INFO);

  t_config* config = config_create(CONFIG_FILE_PATH);

  //IP_KERNEL = config_get_string_value(config, "IP_KERNEL");
  //PUERTO_KERNEL = config_get_string_value(config, "PUERTO_KERNEL");

  /*
    kernel_fd = crear_conexion(consola_log,"KERNEL",IP_KERNEL,PUERTO_KERNEL);

  if ((archivoEjecucion = fopen(argv[1], "rt")) == NULL){
    printf ( " Error en la apertura. Es posible que el fichero no exista \n");
    log_info(consola_log, "Error archivo de entrada \n");
  }

  struct stat stat_file;
  stat(argv[1], &stat_file);
  codigoEjecucion = calloc(1, stat_file.st_size + 1);
  fread(codigoEjecucion, stat_file.st_size, 1, archivoEjecucion);
  log_info(consola_log,codigoEjecucion);

  t_paquete* paquete;
  paquete = crear_paquete();
  agregar_a_paquete(paquete,codigoEjecucion,strlen(codigoEjecucion)+1);
  enviar_paquete(paquete,kernel_fd);
  eliminar_paquete(paquete);

  cerrar_programa(consola_log);
  */

	return 0;

}



