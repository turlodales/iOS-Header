//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSProcessIdentity.h>

@class RBSXPCServiceIdentity;

__attribute__((visibility("hidden")))
@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity
{
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (_Bool)shouldManageExtensionWithExtensionPoint:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_matchesIdentity:(id)arg1;
- (_Bool)isEqualToIdentity:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithDecodeFromJob:(id)arg1;
- (id)encodeForJob;
- (_Bool)inheritsCoalitionBand;
- (id)uuid;
- (id)hostIdentifier;
- (id)hostIdentity;
- (id)xpcServiceIdentifier;
- (_Bool)isAnonymous;
- (_Bool)isXPCService;
- (unsigned char)defaultManageFlags;
- (_Bool)isExtension;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)_initWithXPCServiceID:(id)arg1 pid:(int)arg2 euid:(unsigned int)arg3;

@end

