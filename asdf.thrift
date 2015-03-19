namespace php asdf
namespace cocoa asdf

struct AuthenticationEnvelope {
    1: required string token;
}

struct capitalizationStruct {
    1: required AuthenticationEnvelope Token;
    2: optional string token;
    3: required i32 toKen;
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
    i32 ping23(1:AuthenticationEnvelope envelope);
}
