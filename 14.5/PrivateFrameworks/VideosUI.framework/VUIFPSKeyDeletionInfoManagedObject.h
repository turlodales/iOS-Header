//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIFPSKeyDeletionInfoManagedObject : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) NSData *additionalFPSRequestParamsJSONData; // @dynamic additionalFPSRequestParamsJSONData;
@property(copy, nonatomic) NSString *contentID; // @dynamic contentID;
@property(copy, nonatomic) NSNumber *dsid; // @dynamic dsid;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @dynamic fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsNonceURL; // @dynamic fpsNonceURL;
@property(retain, nonatomic) NSData *keyData; // @dynamic keyData;
@property(copy, nonatomic) NSURL *keyURI; // @dynamic keyURI;
@property(copy, nonatomic) NSDate *playbackExpirationStartDate; // @dynamic playbackExpirationStartDate;

@end

