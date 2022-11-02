https://www.youtube.com/watch?v=DCoBcpOA7W4&t=929s&ab_channel=PeladoNerd
https://www.youtube.com/watch?v=5-Qcig2_8xo&t=540s&ab_channel=NullSafeArchitect
https://www.youtube.com/watch?v=l-UZQjdPUAI&ab_channel=FernandoHerrera

https://github.com/pablokbs/peladonerd
https://kubernetes.io/docs/tasks/manage-kubernetes-objects/kustomization/
https://computingforgeeks.com/deploy-ubuntu-pod-in-kubernetes-openshift/
https://refactorizando.com/como-crear-helm-chart-kubernetes/
https://kubernetes.io/es/docs/concepts/workloads/controllers/deployment/
https://docs.docker.com/engine/reference/commandline/exec/
https://docs.docker.com/compose/environment-variables/

https://hub.docker.com/_/gcc
https://hub.docker.com/_/ubuntu


docker build -t cliente-ubuntu .
kubectl apply -f server-deployment.yml
docker build -t server-tcp .
telnet 127.0.0.1 9666
docker run -it --rm --name my-running-app my-gcc-app
netstat -ltpn
ping 127.0.0.1
ifconfig 

kubectl describe pod
kubectl delete calculadora
kubectl get deploy
docker exec -it 4bc2114ddb9e  bash
kubectl get pods -o wide
docker login