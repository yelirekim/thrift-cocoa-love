namespace php asdf
namespace cocoa asdf

struct AuthenticationEnvelope {
    1: required string token;
}

service AuthenticatedService {
    i32 ping(1:AuthenticationEnvelope envelope);
}
