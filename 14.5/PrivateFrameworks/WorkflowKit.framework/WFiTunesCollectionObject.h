//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFiTunesStoreObject.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface WFiTunesCollectionObject : WFiTunesStoreObject <MTLJSONSerializing>
{
    NSString *_type;
    NSString *_genre;
    NSNumber *_trackCount;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *trackCount; // @synthesize trackCount=_trackCount;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

