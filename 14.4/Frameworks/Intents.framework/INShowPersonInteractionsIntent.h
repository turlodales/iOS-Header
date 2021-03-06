//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INShowPersonInteractionsIntentExport-Protocol.h>

@class INPerson, NSString;

@interface INShowPersonInteractionsIntent : INIntent <INShowPersonInteractionsIntentExport>
{
    INPerson *_person;
    NSString *_focusItemIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *focusItemIdentifier; // @synthesize focusItemIdentifier=_focusItemIdentifier;
@property(copy, nonatomic) INPerson *person; // @synthesize person=_person;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPerson:(id)arg1 focusItemIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

