## Sistema de Cadastro e Controle de Alunos

Este repositório contém o código fonte de um sistema de cadastro e controle de alunos desenvolvido em C. O programa oferece funcionalidades básicas para gerenciar os dados dos alunos, incluindo:

- **Cadastro de Alunos:** Permite adicionar novos alunos ao sistema,  coletando informações como nome, idade, sexo, universidade, curso, semestre, documento, email e telefone.
- **Listagem de Alunos:** Exibe a lista completa de alunos cadastrados,  mostrando todos os seus dados.
- **Busca de Alunos:**  Permite pesquisar alunos específicos por matrícula.
- **Carregamento e Salvamento de Dados:** Permite carregar dados de um arquivo e salvar os dados cadastrados em um arquivo.
- **Controle de Usuário:**  Implementa um sistema básico de login e cadastro de usuários.

### Requisitos

- Compilador C:  gcc ou outro compilador C compatível.

### Instalação e Execução

1. **Baixe o código:** Baixe o repositório para seu computador.
2. **Compilação:** Abra o terminal em seu computador e navegue até o diretório do projeto. Utilize o comando `gcc main.c -o sistema_alunos` para compilar o código.
3. **Execução:** Execute o programa usando `./sistema_alunos`.

### Construído com

- Linguagem de Programação: C
- Compilador: gcc

### Integrantes
- Pedro guaita
- Pedro Henrique
- João Victor
- Matheus Cavalheiro

### Funcionalidades

- **Menu Principal:**  O programa apresenta um menu com opções para cadastrar alunos,  listar alunos,  buscar alunos,  carregar dados,  salvar dados,  cadastrar usuários e fazer login.
- **Validação de Dados:** O programa implementa validações básicas para garantir a integridade dos dados,  como verificações de campos vazios e intervalos válidos.
- **Gerenciamento de Arquivos:**  O sistema usa arquivos para persistir os dados dos alunos.

### Estrutura do Código

- **`main.c`:**  O arquivo principal do programa,  contendo a função `main()` e o loop do menu principal.
- **`cadastro_alunos.c`:**  Contém as funções para cadastrar,  listar e buscar alunos.
- **`carregar_salvar_alunos.c`:**  Contém as funções para carregar e salvar os dados dos alunos em arquivos.
- **`cadastro_login.c`:**  Contém as funções para cadastrar e fazer login de usuários.

### Data de Criação

07/10/2024

### Última Atualização

20/10/2024

### Contribuintes

- **Pedro Guaita**: [Link para perfil do GitHub](https://github.com/pedroguaita)
- **Pedro Henrique**: [Link para perfil do GitHub](https://github.com/PedroHenri10) 
- **Matheus Cavalheiro**: [Link para perfil do GitHub](https://github.com/matheuscamargo4) 
- **João Victor**: [Link para perfil do GitHub](https://github.com/Jaummmn) 


### Observações

- O sistema foi desenvolvido para fins didáticos e pode ser expandido com novas funcionalidades e aprimoramentos.
