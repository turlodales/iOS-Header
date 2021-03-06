//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationRequest *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_670edf35)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) long long opt_in_status;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *app_id;
@property(readonly, nonatomic) NSArray *paragraphs;
@property(readonly, nonatomic) NSString *target_language;
@property(readonly, nonatomic) NSString *source_language;
@property(readonly, nonatomic) NSString *task;
@property(readonly, nonatomic) NSString *request_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationRequest *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationRequest *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

