//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNotesMetadataResultSpec : FATObject
{
    NSNumber *_includeTitle;
    NSNumber *_includeContentLength;
    NSNumber *_includeCreated;
    NSNumber *_includeUpdated;
    NSNumber *_includeDeleted;
    NSNumber *_includeUpdateSequenceNum;
    NSNumber *_includeNotebookGuid;
    NSNumber *_includeTagGuids;
    NSNumber *_includeAttributes;
    NSNumber *_includeLargestResourceMime;
    NSNumber *_includeLargestResourceSize;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *includeLargestResourceSize; // @synthesize includeLargestResourceSize=_includeLargestResourceSize;
@property(retain, nonatomic) NSNumber *includeLargestResourceMime; // @synthesize includeLargestResourceMime=_includeLargestResourceMime;
@property(retain, nonatomic) NSNumber *includeAttributes; // @synthesize includeAttributes=_includeAttributes;
@property(retain, nonatomic) NSNumber *includeTagGuids; // @synthesize includeTagGuids=_includeTagGuids;
@property(retain, nonatomic) NSNumber *includeNotebookGuid; // @synthesize includeNotebookGuid=_includeNotebookGuid;
@property(retain, nonatomic) NSNumber *includeUpdateSequenceNum; // @synthesize includeUpdateSequenceNum=_includeUpdateSequenceNum;
@property(retain, nonatomic) NSNumber *includeDeleted; // @synthesize includeDeleted=_includeDeleted;
@property(retain, nonatomic) NSNumber *includeUpdated; // @synthesize includeUpdated=_includeUpdated;
@property(retain, nonatomic) NSNumber *includeCreated; // @synthesize includeCreated=_includeCreated;
@property(retain, nonatomic) NSNumber *includeContentLength; // @synthesize includeContentLength=_includeContentLength;
@property(retain, nonatomic) NSNumber *includeTitle; // @synthesize includeTitle=_includeTitle;

@end

