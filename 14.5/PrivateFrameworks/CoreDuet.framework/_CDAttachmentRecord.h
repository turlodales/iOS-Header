//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString, NSURL, NSUUID;

@interface _CDAttachmentRecord : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSUUID *cloudIdentifier; // @dynamic cloudIdentifier;
@property(retain, nonatomic) NSString *contentText; // @dynamic contentText;
@property(retain, nonatomic) NSURL *contentURL; // @dynamic contentURL;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *interactions; // @dynamic interactions;
@property(retain, nonatomic) NSString *photoLocalIdentifier; // @dynamic photoLocalIdentifier;
@property(nonatomic) long long sizeInBytes; // @dynamic sizeInBytes;
@property(retain, nonatomic) NSString *uti; // @dynamic uti;
@end

