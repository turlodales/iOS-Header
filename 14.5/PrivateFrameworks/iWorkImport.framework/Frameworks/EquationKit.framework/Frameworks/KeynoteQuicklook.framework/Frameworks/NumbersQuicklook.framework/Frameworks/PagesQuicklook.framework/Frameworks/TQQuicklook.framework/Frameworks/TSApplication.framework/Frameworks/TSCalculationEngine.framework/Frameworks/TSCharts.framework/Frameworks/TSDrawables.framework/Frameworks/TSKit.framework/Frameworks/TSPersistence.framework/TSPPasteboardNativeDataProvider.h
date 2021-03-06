//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/TSPDecoder-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, TSPPasteboard;

@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder>
{
    TSPPasteboard *_pasteboard;
    NSMutableDictionary *_nativeData;
    NSMutableDictionary *_tspData;
}

- (void).cxx_destruct;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)dataForIdentifier:(long long)arg1;
@property(readonly, nonatomic) NSArray *promisedDataTypes;
- (void)loadNativeData;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

