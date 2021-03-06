//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKFTSEnumeration : NSObject
{
    NSString *mDirectoryPath;
    int mOptions;
}

+ (int)defaultOptions;
- (void).cxx_destruct;
- (_Bool)shouldSkipEntry:(struct _ftsent *)arg1;
- (id)readNextEntryFromFTS:(CDStruct_2263269c *)arg1 error:(id *)arg2;
- (id)readAllEntriesFromFTS:(CDStruct_2263269c *)arg1 error:(id *)arg2;
- (void)closeFTS:(CDStruct_2263269c *)arg1;
- (CDStruct_2263269c *)makeFTSWithError:(id *)arg1;
- (id)entriesWithError:(id *)arg1;
- (id)initWithDirectoryPath:(id)arg1 options:(int)arg2;
- (id)initWithDirectoryPath:(id)arg1;
- (id)init;

@end

