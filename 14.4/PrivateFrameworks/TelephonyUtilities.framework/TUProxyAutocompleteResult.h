//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUSearchResult-Protocol.h>

@class CNAutocompleteResult, CNContact, NSArray, NSString;

@interface TUProxyAutocompleteResult : NSObject <TUSearchResult>
{
    CNAutocompleteResult *_autocompleteResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNAutocompleteResult *autocompleteResult; // @synthesize autocompleteResult=_autocompleteResult;
@property(readonly) NSArray *idsCanonicalDestinations;
@property(readonly) _Bool mostRecentCallWasMissed;
@property(readonly) long long mostRecentCallType;
@property(readonly) NSArray *handles;
@property(readonly) NSString *isoCountryCode;
@property(readonly) NSString *destinationId;
@property(readonly) NSString *backingContactIdentifier;
@property(readonly) NSString *backingContactId;
@property(readonly) CNContact *backingContact;
@property(readonly) NSString *callerId;
@property(readonly) NSString *displayName;
- (id)init;
- (id)initWithAutocompleteResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

