//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Trial/TRINamespaceManagementProtocol-Protocol.h>

@class _PASXPCClientHelper;

@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol>
{
    _PASXPCClientHelper *_helper;
}

- (void).cxx_destruct;
- (_Bool)deregisterNamespaceWithNamespaceName:(id)arg1 error:(id *)arg2;
- (id)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)startNamespaceDownloadWithName:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id *)arg6;
- (id)init;

@end

