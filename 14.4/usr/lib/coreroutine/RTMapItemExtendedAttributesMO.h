//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSUUID;

@interface RTMapItemExtendedAttributesMO : NSManagedObject
{
}

+ (id)managedObjectWithExtendedAttributes:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)managedObjectWithExtendedAttributes:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *addressIdentifier; // @dynamic addressIdentifier;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSNumber *isMe; // @dynamic isMe;
@property(copy, nonatomic) NSNumber *wifiConfidence; // @dynamic wifiConfidence;
@property(copy, nonatomic) NSNumber *wifiFingerprintLabelType; // @dynamic wifiFingerprintLabelType;

@end

