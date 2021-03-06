//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLURIArrayWithHashes : NSObject
{
    struct __CFArray *_uris;
    struct __CFArray *_hashes;
    NSMutableArray *_attributeValues;
    NSMutableArray *_relationshipValues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *relationshipValues; // @synthesize relationshipValues=_relationshipValues;
@property(retain, nonatomic) NSMutableArray *attributeValues; // @synthesize attributeValues=_attributeValues;
@property(nonatomic) struct __CFArray *hashes; // @synthesize hashes=_hashes;
@property(nonatomic) struct __CFArray *uris; // @synthesize uris=_uris;
@property(readonly, nonatomic) _Bool isUpdate;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (id)initForUpdates:(_Bool)arg1;
- (id)init;

@end

