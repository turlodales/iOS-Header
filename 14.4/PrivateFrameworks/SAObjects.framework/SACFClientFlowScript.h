//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString, SACFScriptEncryptionParameters, SACFScriptUrlInformation;

@interface SACFClientFlowScript : SABaseAceObject
{
}

+ (id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientFlowScript;
@property(retain, nonatomic) SACFScriptUrlInformation *urlInformation;
@property(nonatomic) _Bool shouldSkipExecution;
@property(nonatomic) _Bool shouldCacheScript;
@property(copy, nonatomic) NSString *jsScriptIdentifier;
@property(copy, nonatomic) NSData *jsScriptChecksum;
@property(copy, nonatomic) NSString *jsScript;
@property(copy, nonatomic) NSString *fileContentType;
@property(retain, nonatomic) SACFScriptEncryptionParameters *encryptionParameters;
@property(copy, nonatomic) NSData *compressedScript;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

