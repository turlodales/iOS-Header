//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/AudioComponentRegistrarProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol>
{
    struct AudioComponentRegistrarImpl *mImpl;
    struct ConnectionInfo mConnInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)canRegisterComponent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getComponentList:(id)arg1 linkedSDKRequiresEntitlement:(_Bool)arg2 includeExtensions:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl *)arg1 connection:(id)arg2;

@end

