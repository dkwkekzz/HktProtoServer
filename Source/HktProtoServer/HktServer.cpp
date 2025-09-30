#include "HktServer.h"

class FHktRpcService
{
public:
    void Run(const std::string& server_address, size_t thread_count)
    {
        // Implementation of starting the RPC service
    }

    void Shutdown()
    {
        // Implementation of shutting down the RPC service
	}
};

FHktServer::FHktServer()
    : RpcService(MakeUnique<FHktRpcService>())
{
}

FHktServer::~FHktServer()
{
    Shutdown();
}

void FHktServer::Run(const std::string& server_address, size_t thread_count)
{
    check(RpcService);
    RpcService->Run(server_address, thread_count);
}

void FHktServer::Shutdown()
{
    if (RpcService)
    {
        RpcService->Shutdown();
        RpcService.Reset();
    }
}
