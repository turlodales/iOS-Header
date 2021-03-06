//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CommunicationFilterItem : NSObject
{
    struct __CFPhoneNumber *_phoneNumber;
    NSString *_emailAddress;
}

@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) struct __CFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentationWithRedaction;
- (_Bool)matchesFilterItem:(id)arg1;
@property(readonly, nonatomic) NSString *unformattedID;
- (_Bool)isPhoneNumber;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)description;
- (_Bool)_acceptVersion:(id)arg1;
- (_Bool)_acceptItemType:(id)arg1;
- (void)dealloc;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber *)arg1;

@end

