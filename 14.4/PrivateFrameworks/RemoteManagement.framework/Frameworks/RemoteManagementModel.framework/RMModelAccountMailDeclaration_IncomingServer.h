//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSNumber, NSString;

@interface RMModelAccountMailDeclaration_IncomingServer : RMModelPayloadBase
{
    NSString *_payloadServerType;
    NSString *_payloadHostName;
    NSNumber *_payloadPort;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadAuthenticationCredentialsAssetReference;
    NSString *_payloadIMAPPathPrefix;
}

+ (id)buildRequiredOnlyWithServerType:(id)arg1 hostName:(id)arg2 authenticationMethod:(id)arg3;
+ (id)buildWithServerType:(id)arg1 hostName:(id)arg2 port:(id)arg3 authenticationMethod:(id)arg4 authenticationCredentialsAssetReference:(id)arg5 imapPathPrefix:(id)arg6;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadIMAPPathPrefix; // @synthesize payloadIMAPPathPrefix=_payloadIMAPPathPrefix;
@property(copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference; // @synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference;
@property(copy, nonatomic) NSString *payloadAuthenticationMethod; // @synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod;
@property(copy, nonatomic) NSNumber *payloadPort; // @synthesize payloadPort=_payloadPort;
@property(copy, nonatomic) NSString *payloadHostName; // @synthesize payloadHostName=_payloadHostName;
@property(copy, nonatomic) NSString *payloadServerType; // @synthesize payloadServerType=_payloadServerType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

