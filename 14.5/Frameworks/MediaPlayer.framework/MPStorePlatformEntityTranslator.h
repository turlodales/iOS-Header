//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPBaseEntityTranslator.h>

@interface MPStorePlatformEntityTranslator : MPBaseEntityTranslator
{
}

+ (id)translatorForKind:(id)arg1;
+ (void)buildSchemaIfNeeded;
- (id)identifiersForPayload:(id)arg1 context:(id)arg2;
- (id)objectForPropertySet:(id)arg1 payload:(id)arg2 context:(id)arg3;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 payloadTransform:(CDUnknownBlockType)arg3;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformerFunction:(CDUnknownFunctionPointerType)arg3;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformer:(CDUnknownBlockType)arg3;
- (void)mapPropertyKey:(id)arg1 toPayloadKeyPath:(id)arg2;
- (void)mapIdentifierCreationKeyPaths:(id)arg1 transformBlock:(CDUnknownBlockType)arg2;
- (id)prepareSource:(id)arg1 context:(id)arg2 properties:(id)arg3;

@end

