//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HFServiceActionItemProvider, HMHome, HMTrigger, NSString;
@protocol HFHomeKitObject;

@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol>
{
    _Bool _usesRichIconDescriptors;
    HMHome *_home;
    HMTrigger *_trigger;
    HFServiceActionItemProvider *_serviceActionItemProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFServiceActionItemProvider *serviceActionItemProvider; // @synthesize serviceActionItemProvider=_serviceActionItemProvider;
@property(nonatomic) _Bool usesRichIconDescriptors; // @synthesize usesRichIconDescriptors=_usesRichIconDescriptors;
@property(readonly, nonatomic) HMTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)translateToRichIconDescriptors:(id)arg1 basedOnActionItems:(id)arg2;
- (id)createRichIconDescriptors:(id)arg1 options:(id)arg2;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 trigger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

