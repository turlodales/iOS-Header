//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNChangeHistoryEventFactory, CNContactStore, NSArray;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryResultEventConverter : NSObject
{
    CNContactStore *_contactStore;
    NSArray *_additionalContactKeyDescriptors;
    CNChangeHistoryEventFactory *_factory;
}

- (void).cxx_destruct;
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly, copy) NSArray *additionalContactKeyDescriptors; // @synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors;
@property(readonly) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)eventsFromResult:(id)arg1;
- (id)initWithContactStore:(id)arg1 additionalContactKeyDescriptors:(id)arg2;

@end

