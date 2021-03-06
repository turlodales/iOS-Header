//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString;

@interface PLLocalVideoKeyFrameGenerationJob : NSObject
{
    _Bool _networkAccessAllowed;
    NSManagedObjectID *_assetObjectID;
    NSString *_libraryID;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *libraryID; // @synthesize libraryID=_libraryID;
@property(nonatomic) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(retain, nonatomic) NSManagedObjectID *assetObjectID; // @synthesize assetObjectID=_assetObjectID;
- (unsigned long long)hash;
- (_Bool)isEqualToJob:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

