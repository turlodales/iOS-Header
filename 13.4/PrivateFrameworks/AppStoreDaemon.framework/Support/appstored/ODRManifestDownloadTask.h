//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Task.h"

@class NSString, NSURL, ODRManifest;

@interface ODRManifestDownloadTask : Task
{
    NSURL *_URL;
    NSString *_bundleID;
    ODRManifest *_manifest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ODRManifest *manifest; // @synthesize manifest=_manifest;
- (void)main;
- (id)initWithURL:(id)arg1 forBundleID:(id)arg2;

@end

