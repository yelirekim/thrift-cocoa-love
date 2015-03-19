namespace php asdf
namespace cocoa asdf

struct AuthenticationEnvelope {
    1: required string token;
}

service AuthenticatedService {
    i32 ping(1:AuthenticationEnvelope envelope);
}

service AuthenticatedService1 {
    i32 ping11(1:AuthenticationEnvelope envelope);
    i32 ping12(1:AuthenticationEnvelope envelope);
}

service AuthenticatedService2 {
    i32 ping21(1:AuthenticationEnvelope envelope);
    i32 ping22(1:AuthenticationEnvelope envelope);
}

service AuthenticatedService3 {
    i32 ping31(1:AuthenticationEnvelope envelope);
    i32 ping32(1:AuthenticationEnvelope envelope);
}

service AuthenticatedService4 {
    i32 ping41(1:AuthenticationEnvelope envelope);
    i32 ping42(1:AuthenticationEnvelope envelope);
}
