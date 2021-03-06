//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>

@class FCFeedDescriptor, NSString;

@interface NUFeedMetadataAdContextProvider : NSObject <NUAdContextProvider>
{
    FCFeedDescriptor *_feedDescriptor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithFeedDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

