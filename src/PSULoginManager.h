//
//  ISLogin.h
//  Instaslider
//
//  Created by Baluta Cristian on 04/05/2013.
//  Copyright (c) 2013 Baluta Cristian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PSUEnums.h"

#define PX_CONSUMER_KEY @"oRhd5r3iEcGmvgxuSP4rOus3nQit9XoJmJm3o57G"
#define PX_CONSUMER_SECRET @"F5llLjIbcQnMahOT927qtG8CCcsOysKYtVVh7TwE"

@protocol PSULoginDelegate <NSObject>

@required
- (void)loginComplete:(PSUSourceType)type;
- (void)loginError:(PSUSourceType)type;

@end

@interface PSULoginManager : NSObject

@property (strong, nonatomic) id<PSULoginDelegate> delegate;

+ (instancetype)sharedManager;

- (void)activate;
- (void)deactivate;
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (BOOL)application:(UIApplication *)app
            openURL:(NSURL *)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;

- (void)login:(PSUSourceType)type;
- (BOOL)isLoggedIn:(PSUSourceType)type;

@end
