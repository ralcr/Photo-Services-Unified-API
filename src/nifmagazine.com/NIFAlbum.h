//
//  LIBAlbum.h
//  Instaslider
//
//  Created by Baluta Cristian on 05/05/2013.
//  Copyright (c) 2013 Baluta Cristian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import "PSUAlbum.h"

@interface CRAlbum : PSUAlbum

@property (nonatomic, strong) ALAssetsGroup *groupRef;
@end