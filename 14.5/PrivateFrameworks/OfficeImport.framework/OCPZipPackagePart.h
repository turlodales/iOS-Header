//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCPPackagePart.h>

@class OISFUZipEntry;

__attribute__((visibility("hidden")))
@interface OCPZipPackagePart : OCPPackagePart
{
    OISFUZipEntry *mEntry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OISFUZipEntry *zipEntry; // @synthesize zipEntry=mEntry;
- (struct _xmlTextReader *)xmlReader;
- (struct _xmlDoc *)xmlDocument;
- (void)copyToFile:(id)arg1;
- (id)data;
- (id)initWithArchive:(id)arg1 location:(id)arg2 package:(id)arg3;

@end

