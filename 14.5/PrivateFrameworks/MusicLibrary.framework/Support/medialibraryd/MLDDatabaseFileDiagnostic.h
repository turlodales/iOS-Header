//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MLDDatabaseFileDiagnostic : NSObject
{
    NSString *_databasePath;
    NSDictionary *_fileAttributes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)description;
- (id)initWithDatabasePath:(id)arg1;

@end

